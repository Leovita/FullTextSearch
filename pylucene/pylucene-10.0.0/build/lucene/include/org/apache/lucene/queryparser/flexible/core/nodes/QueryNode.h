#ifndef org_apache_lucene_queryparser_flexible_core_nodes_QueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_QueryNode_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class CloneNotSupportedException;
  }
  namespace util {
    class List;
    class Map;
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
                  mid_add_9425cd4f62c94bce,
                  mid_add_7b62f837facd6562,
                  mid_cloneTree_7ba6641ec93d332a,
                  mid_containsTag_4a13a663b5c11133,
                  mid_getChildren_36830460e10839eb,
                  mid_getParent_7ba6641ec93d332a,
                  mid_getTag_e5cf973b773e2999,
                  mid_getTagMap_f125f26c07a7bec8,
                  mid_isLeaf_947277eca0748c4e,
                  mid_removeChildren_7b62f837facd6562,
                  mid_removeFromParent_3720c61b0679eb3e,
                  mid_set_9425cd4f62c94bce,
                  mid_setTag_7a6f329c036f2238,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
                  mid_unsetTag_0d82408c6e55bc30,
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
