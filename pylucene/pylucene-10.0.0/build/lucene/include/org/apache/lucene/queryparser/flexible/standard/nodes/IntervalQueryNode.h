#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_IntervalQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_IntervalQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
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
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
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
                  mid_init$_86fe68f58d040375,
                  mid_cloneTree_005baad7a9e2f587,
                  mid_getField_373f0038978f926b,
                  mid_getQuery_a3eacfacada795d4,
                  mid_setAnalyzer_07cd0f76cabcf75a,
                  mid_setField_5ed8eb2e3024c663,
                  mid_toQueryString_cef5cad2ff4999a0,
                  mid_toString_09a7afff1868fc5e,
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
