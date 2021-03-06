#ifndef HISCORES_H
#define HISCORES_H

#include <iostream> // for cout, endl, etc
#include <cstring> // for the function strcmp

/**
 * Class Hiscores to maintain an ordered list of elements.
 * This class has to be implemented as a linked list of nodes,
 * where each node contains an element, its score, and the pointers
 * to the previous and next nodes in the list.
 */
template<class T>
class Hiscores
{
	public:

		// Constructor and destructor
		Hiscores();
		~Hiscores();

		// Inserts an element
		void insert(T elem, int score);

		// Updates an element
		void update(T elem, int score);

		// It clears the score and releases the dynamic memory.
		void clear();

		// Prints the list
		void print() const;

	private:

		// Struct describing the nodes of the list
		struct node {
			T elem;     // element in the node
			int score;  // score of this element
			node *above; // pointer to the node above
			node *below; // pointer to the node below
		};

		// It tries to find a node in the list
		node *findNode(T elem) const;

		// It moves the node in the list depending on its score
		void moveNode(node *n);

		node *first; // pointer to the first node
};

// Constructor
template<class T>
Hiscores<T>::Hiscores() :
	first(nullptr)
{ }

// Destructor
template<class T>
Hiscores<T>::~Hiscores()
{
	clear();
}

// Inserts a new element in the list
template<class T>
void Hiscores<T>::insert(T elem, int score)
{
	// Insert the node in the beginning of the list
	node *new_node = new node;
	new_node->elem = elem;
	new_node->score = score;
	new_node->above = nullptr;
	new_node->below = first;
	if (first) { first->above = new_node; }
	first = new_node;

	// Reposition the node
	moveNode(new_node);
}

// Updates the position of an element in the list
template<class T>
void Hiscores<T>::update(T elem, int score)
{
	// Find the node in the list
	node *n = findNode(elem);

	if (n != nullptr)
	{
		// Update score and reposition the node
		n->score = score;
		moveNode(n);
	}
}

// Clears the list and releases the dynamic memory
template<class T>
void Hiscores<T>::clear()
{
	while (first)
	{
		node *aux = first->below;
		delete first;
		first = aux;
	}
}

// Prints the list
template<class T>
void Hiscores<T>::print() const
{
	int pos = 1;
	node *curr = first;
	while (curr)
	{
		std::cout << "Position " << pos << ": " << curr->elem << " (score: " << curr->score << ")" << std::endl;
		curr = curr->below;
		pos++;
	}
}

////////////////////////////////////////////////////////////////////////
// Private methods
////////////////////////////////////////////////////////////////////////

template<class T>
typename Hiscores<T>::node* Hiscores<T>::findNode(T elem) const
{
	// NOTE: we are using the function strcmp to compare strings
	//       (we are assuming that T will be a char pointer here, not nice, I know...)
	node *curr = first;
	while (curr)
	{
		if (strcmp(curr->elem, elem) == 0) { return curr; }
		curr = curr->below;
	}
	return curr;
}

// It moves the node in list depending on its score...
// The node passed is a node already belonging in the list.
// The code in this method has to check the score in the node, and move the node upwards or downwards in the score list accordingly.
// NOTE: You can assume that the list is ordered by score in decreasing order except for the passed node, for which you have to update its position in the list.
template<class T>
void Hiscores<T>::moveNode(node *n)
{
	// Move towards the top while the score is higher
	// TODO 
	while ( n->above!=nullptr && n->score > n->above->score )
	{		
		{
			node *aux = n->above->above;
			node *aux2 = n->above;
			node *aux3 = n->below;

			n->above = aux;
			n->below = aux2;
			if (aux != nullptr)
			{
				aux->below = n;
			}
			else
			{
				first = n;
			}
			aux2->above = n;
			aux2->below = aux3;
			if (aux3 != nullptr)
			{
				aux3->above = aux2;
			}
		}
		
	}

	while (n->below != nullptr && n->score < n->below->score)
	{
		node *aux = n->below->below;
		node *aux2 = n->below;
		node *aux3 = n->above;

		n->below = aux;
		n->above = aux2;
		if (aux != nullptr)
		{
			aux->above = n;
		}
		aux2->below = n;
		aux2->above = aux3;
		if (aux3 != nullptr)
		{
			aux3->below = aux2;
		}
	}
}

#endif // HISCORES_H
