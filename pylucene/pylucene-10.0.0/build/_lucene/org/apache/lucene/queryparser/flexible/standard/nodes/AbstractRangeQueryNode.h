#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_AbstractRangeQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_AbstractRangeQueryNode_H

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
              class RangeQueryNode;
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
    class Object;
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

              class AbstractRangeQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_getField_373f0038978f926b,
                  mid_getLowerBound_0aac99d16f405c93,
                  mid_getUpperBound_0aac99d16f405c93,
                  mid_isLowerInclusive_947277eca0748c4e,
                  mid_isUpperInclusive_947277eca0748c4e,
                  mid_setBounds_d8fe065a622c2b4c,
                  mid_setField_5ed8eb2e3024c663,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AbstractRangeQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AbstractRangeQueryNode(const AbstractRangeQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                ::java::lang::CharSequence getField() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getLowerBound() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getUpperBound() const;
                jboolean isLowerInclusive() const;
                jboolean isUpperInclusive() const;
                void setBounds(const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode &, const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode &, jboolean, jboolean) const;
                void setField(const ::java::lang::CharSequence &) const;
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
              extern PyType_Def PY_TYPE_DEF(AbstractRangeQueryNode);
              extern PyTypeObject *PY_TYPE(AbstractRangeQueryNode);

              class t_AbstractRangeQueryNode {
              public:
                PyObject_HEAD
                AbstractRangeQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AbstractRangeQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AbstractRangeQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AbstractRangeQueryNode&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
