#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_IntervalQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_IntervalQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {
              class EscapeQuerySyntax;
            }
            namespace nodes {
              class FieldableNode;
            }
          }
          namespace standard {
            namespace nodes {
              class IntervalQueryNode;
              namespace intervalfn {
                class IntervalFunction;
              }
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

              class IntervalQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_a9c9db8d123941e4,
                  mid_cloneTree_bcd6088f75b0288c,
                  mid_getField_f2e5418fe0d66c69,
                  mid_getQuery_ffa7bd087b2a75aa,
                  mid_setAnalyzer_1aaca852402a5069,
                  mid_setField_fe2ab7d27aa3fe1a,
                  mid_toQueryString_237ac3cfafa67a48,
                  mid_toString_e7df854526d67fa3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit IntervalQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                IntervalQueryNode(const IntervalQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                IntervalQueryNode(const ::java::lang::String &, const ::org::apache::lucene::queryparser::flexible::standard::nodes::intervalfn::IntervalFunction &);

                IntervalQueryNode cloneTree() const;
                ::java::lang::CharSequence getField() const;
                ::org::apache::lucene::search::Query getQuery() const;
                void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
                void setField(const ::java::lang::CharSequence &) const;
                ::java::lang::String toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
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
              extern PyType_Def PY_TYPE_DEF(IntervalQueryNode);
              extern PyTypeObject *PY_TYPE(IntervalQueryNode);

              class t_IntervalQueryNode {
              public:
                PyObject_HEAD
                IntervalQueryNode object;
                static PyObject *wrap_Object(const IntervalQueryNode&);
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
