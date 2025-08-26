#ifndef org_apache_lucene_queryparser_flexible_core_nodes_RangeQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_RangeQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldableNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
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
    class Object;
    class Class;
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

              class RangeQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode {
               public:
                enum {
                  mid_getLowerBound_e70134a84b454b28,
                  mid_getUpperBound_e70134a84b454b28,
                  mid_isLowerInclusive_9aa4f33e82ea333f,
                  mid_isUpperInclusive_9aa4f33e82ea333f,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RangeQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RangeQueryNode(const RangeQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode(obj) {}

                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getLowerBound() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getUpperBound() const;
                jboolean isLowerInclusive() const;
                jboolean isUpperInclusive() const;
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
              extern PyType_Def PY_TYPE_DEF(RangeQueryNode);
              extern PyTypeObject *PY_TYPE(RangeQueryNode);

              class t_RangeQueryNode {
              public:
                PyObject_HEAD
                RangeQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_RangeQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const RangeQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const RangeQueryNode&, PyTypeObject *);
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
