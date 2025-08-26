#ifndef org_apache_lucene_queryparser_flexible_core_nodes_QueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_QueryNode_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class CloneNotSupportedException;
  }
  namespace util {
    class Map;
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {
              class EscapeQuerySyntax;
            }
            namespace nodes {
              class QueryNode;
            }
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {

              class QueryNode : public ::java::lang::Object {
               public:
                enum {
                  mid_add_acbb405b60a30822,
                  mid_add_7bd9517de8cc5b9b,
                  mid_cloneTree_1a37a44f7f2f5350,
                  mid_containsTag_94f7e759d94961b0,
                  mid_getChildren_1387e1e2702ac173,
                  mid_getParent_1a37a44f7f2f5350,
                  mid_getTag_a78a91e32cc37c7c,
                  mid_getTagMap_5004bdf19ed33453,
                  mid_isLeaf_9aa4f33e82ea333f,
                  mid_removeChildren_7bd9517de8cc5b9b,
                  mid_removeFromParent_e7bdbe105ce1bafb,
                  mid_set_acbb405b60a30822,
                  mid_setTag_101074fdf5bb68f6,
                  mid_toQueryString_5260f1dc7a86fc8d,
                  mid_toString_e7df854526d67fa3,
                  mid_unsetTag_ee46a189998009d6,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNode(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNode(const QueryNode& obj) : ::java::lang::Object(obj) {}

                void add(const ::java::util::List &) const;
                void add(const QueryNode &) const;
                QueryNode cloneTree() const;
                jboolean containsTag(const ::java::lang::String &) const;
                ::java::util::List getChildren() const;
                QueryNode getParent() const;
                ::java::lang::Object getTag(const ::java::lang::String &) const;
                ::java::util::Map getTagMap() const;
                jboolean isLeaf() const;
                void removeChildren(const QueryNode &) const;
                void removeFromParent() const;
                void set(const ::java::util::List &) const;
                void setTag(const ::java::lang::String &, const ::java::lang::Object &) const;
                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
                ::java::lang::String toString() const;
                void unsetTag(const ::java::lang::String &) const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(QueryNode);
              extern PyTypeObject *PY_TYPE(QueryNode);

              class t_QueryNode {
              public:
                PyObject_HEAD
                QueryNode object;
                static PyObject *wrap_Object(const QueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
