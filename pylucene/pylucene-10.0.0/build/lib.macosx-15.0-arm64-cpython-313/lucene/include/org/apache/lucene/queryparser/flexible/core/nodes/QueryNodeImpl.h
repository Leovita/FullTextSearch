#ifndef org_apache_lucene_queryparser_flexible_core_nodes_QueryNodeImpl_H
#define org_apache_lucene_queryparser_flexible_core_nodes_QueryNodeImpl_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CloneNotSupportedException;
    class Cloneable;
  }
  namespace util {
    class List;
    class Map;
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
                  mid_init$_3720c61b0679eb3e,
                  mid_add_9425cd4f62c94bce,
                  mid_add_7b62f837facd6562,
                  mid_clone_7ba6641ec93d332a,
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
                  mid_toString_09a7afff1868fc5e,
                  mid_unsetTag_0d82408c6e55bc30,
                  mid_setLeaf_b110fc3a58c081ab,
                  mid_isDefaultField_7fa88c8af67956ed,
                  mid_allocate_3720c61b0679eb3e,
                  mid_isRoot_947277eca0748c4e,
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
