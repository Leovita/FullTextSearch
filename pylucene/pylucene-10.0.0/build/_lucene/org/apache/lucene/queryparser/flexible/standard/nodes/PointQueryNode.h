#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_PointQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_PointQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

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
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class Number;
  }
  namespace text {
    class NumberFormat;
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
                  mid_init$_08a1f453f638d49b,
                  mid_getField_373f0038978f926b,
                  mid_getNumberFormat_98badc23d3190d40,
                  mid_getValue_1b3282bb4db06655,
                  mid_setField_5ed8eb2e3024c663,
                  mid_setNumberFormat_810368e518bc5e16,
                  mid_setValue_87ffc007c701c5b4,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
                  mid_getTermEscaped_d4d5dbebf21f5529,
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
