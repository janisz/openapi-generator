/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator unset.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Category.h"

#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace client {
namespace model {

Category::Category(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string Category::toJsonString(bool prettyJson /* = false */) const
{
    return toJsonString_internal(prettyJson);
}

void Category::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree Category::toPropertyTree() const
{
    return toPropertyTree_internal();
}

void Category::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string Category::toJsonString_internal(bool prettyJson) const
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void Category::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree Category::toPropertyTree_internal() const
{
	ptree pt;
	ptree tmp_node;
	pt.put("id", m_Id);
	pt.put("name", m_Name);
	return pt;
}

void Category::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Id = pt.get("id", 0L);
	m_Name = pt.get("name", "");
}

int64_t Category::getId() const
{
    return m_Id;
}

void Category::setId(int64_t value)
{
	m_Id = value;
}
std::string Category::getName() const
{
    return m_Name;
}

void Category::setName(std::string value)
{
	m_Name = value;
}

std::string createJsonStringFromCategoryVector(const std::vector<std::shared_ptr<Category>>& data)
{
    std::stringstream output;
    output << '[';
    for (std::size_t i = 0; i < data.size(); ++i) {
        output << data[i]->toJsonString(false);
        if (i < data.size() - 1) {
            output << ", ";
        }
    }
    output << ']';
    return output.str();
}

std::vector<std::shared_ptr<Category>> createCategoryVectorFromJsonString(const std::string& json)
{
std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<std::shared_ptr<Category>>();
    for (const auto& child: pt) {
        vec.emplace_back(std::make_shared<Category>(child.second));
    }

    return vec;
}

}
}
}
}

