#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_PointQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_PointQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace java {
  namespace lang {
    class Class;
    class Number;
    class String;
    class CharSequence;
  }
  namespace text {
    class NumberFormat;
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
              class FieldValuePairQueryNode;
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

              class PointQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_075ecf0ac1c33438,
                  mid_getField_f2e5418fe0d66c69,
                  mid_getNumberFormat_cae2d46e75202e5c,
                  mid_getValue_b9665294ea488d3c,
                  mid_setField_fe2ab7d27aa3fe1a,
                  mid_setNumberFormat_72e1e9475236c1c8,
                  mid_setValue_a01e288f5ff9f982,
                  mid_toQueryString_5260f1dc7a86fc8d,
                  mid_toString_e7df854526d67fa3,
                  mid_getTermEscaped_5260f1dc7a86fc8d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PointQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PointQueryNode(const PointQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                PointQueryNode(const ::java::lang::CharSequence &, const ::java::lang::Number &, const ::java::text::NumberFormat &);

                ::java::lang::CharSequence getField() const;
                ::java::text::NumberFormat getNumberFormat() const;
                ::java::lang::Number getValue() const;
                void setField(const ::java::lang::CharSequence &) const;
                void setNumberFormat(const ::java::text::NumberFormat &) const;
                void setValue(const ::java::lang::Number &) const;
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
              extern PyType_Def PY_TYPE_DEF(PointQueryNode);
              extern PyTypeObject *PY_TYPE(PointQueryNode);

              class t_PointQueryNode {
              public:
                PyObject_HEAD
                PointQueryNode object;
                static PyObject *wrap_Object(const PointQueryNode&);
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
