#ifndef org_apache_lucene_queryparser_flexible_core_nodes_QueryNodeImpl_H
#define org_apache_lucene_queryparser_flexible_core_nodes_QueryNodeImpl_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
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

              class QueryNodeImpl : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_e7bdbe105ce1bafb,
                  mid_add_acbb405b60a30822,
                  mid_add_7bd9517de8cc5b9b,
                  mid_clone_1a37a44f7f2f5350,
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
                  mid_toString_e7df854526d67fa3,
                  mid_unsetTag_ee46a189998009d6,
                  mid_setLeaf_f5dd97eebf6a215a,
                  mid_isDefaultField_966cbeda474fd26b,
                  mid_allocate_e7bdbe105ce1bafb,
                  mid_isRoot_9aa4f33e82ea333f,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeImpl(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeImpl(const QueryNodeImpl& obj) : ::java::lang::Object(obj) {}

                static ::java::lang::String *PLAINTEXT_FIELD_NAME;

                QueryNodeImpl();

                void add(const ::java::util::List &) const;
                void add(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode clone() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                jboolean containsTag(const ::java::lang::String &) const;
                ::java::util::List getChildren() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode getParent() const;
                ::java::lang::Object getTag(const ::java::lang::String &) const;
                ::java::util::Map getTagMap() const;
                jboolean isLeaf() const;
                void removeChildren(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void removeFromParent() const;
                void set(const ::java::util::List &) const;
                void setTag(const ::java::lang::String &, const ::java::lang::Object &) const;
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
              extern PyType_Def PY_TYPE_DEF(QueryNodeImpl);
              extern PyTypeObject *PY_TYPE(QueryNodeImpl);

              class t_QueryNodeImpl {
              public:
                PyObject_HEAD
                QueryNodeImpl object;
                static PyObject *wrap_Object(const QueryNodeImpl&);
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
