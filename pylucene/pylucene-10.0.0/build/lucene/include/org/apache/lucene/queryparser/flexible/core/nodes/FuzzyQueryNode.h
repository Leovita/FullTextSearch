#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FuzzyQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FuzzyQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldQueryNode.h"

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
              class FuzzyQueryNode;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {

              class FuzzyQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode {
               public:
                enum {
                  mid_init$_8c43cdd74e1c43b8,
                  mid_cloneTree_06a74b1c5ca34186,
                  mid_getPrefixLength_20fbf7565993c3d7,
                  mid_getSimilarity_9b6c3480dac00edf,
                  mid_setPrefixLength_540b2b23d51b1efd,
                  mid_setSimilarity_c771a95b0227fb6a,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FuzzyQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FuzzyQueryNode(const FuzzyQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {}

                FuzzyQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jfloat, jint, jint);

                FuzzyQueryNode cloneTree() const;
                jint getPrefixLength() const;
                jfloat getSimilarity() const;
                void setPrefixLength(jint) const;
                void setSimilarity(jfloat) const;
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
          namespace core {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(FuzzyQueryNode);
              extern PyTypeObject *PY_TYPE(FuzzyQueryNode);

              class t_FuzzyQueryNode {
              public:
                PyObject_HEAD
                FuzzyQueryNode object;
                static PyObject *wrap_Object(const FuzzyQueryNode&);
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
