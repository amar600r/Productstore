#include "Product.h"

Product::Product()
{
}
Product::Product(int id,string pname,double price){
			this->id=id;
			this->name=pname;
			this->price=price;
		}

Product::~Product()
{
}
