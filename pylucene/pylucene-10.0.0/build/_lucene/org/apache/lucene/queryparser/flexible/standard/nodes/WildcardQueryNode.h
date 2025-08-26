#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_WildcardQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_WildcardQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldQueryNode.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class CloneNotSupportedException;
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
          }
          namespace standard {
            namespace nodes {
              class WildcardQueryNode;
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
          namespace standard {
            namespace nodes {

              class WildcardQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode {
               public:
                enum {
                  mid_init$_06d255b8aaff4dd8,
                  mid_init$_44298a318b5c73fe,
                  mid_cloneTree_96e5e7cbf25a8dc9,
                  mid_toQueryString_5260f1dc7a86fc8d,
                  mid_toString_e7df854526d67fa3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit WildcardQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                WildcardQueryNode(const WildcardQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {}

                WildcardQueryNode(const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode &);
                WildcardQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                WildcardQueryNode cloneTree() const;
                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
                ::java::lang::String toString() const;
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
          namespace standard {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(WildcardQueryNode);
              extern PyTypeObject *PY_TYPE(WildcardQueryNode);

              class t_WildcardQueryNode {
              public:
                PyObject_HEAD
                WildcardQueryNode object;
                static PyObject *wrap_Object(const WildcardQueryNode&);
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
