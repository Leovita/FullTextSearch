#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_PointRangeQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_PointRangeQueryNode_H

#include "org/apache/lucene/queryparser/flexible/standard/nodes/AbstractRangeQueryNode.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
          }
          namespace standard {
            namespace config {
              class PointsConfig;
            }
            namespace nodes {
              class PointQueryNode;
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

              class PointRangeQueryNode : public ::org::apache::lucene::queryparser::flexible::standard::nodes::AbstractRangeQueryNode {
               public:
                enum {
                  mid_init$_d6c21d5f84b2b38e,
                  mid_getPointsConfig_99e7c6f56280d586,
                  mid_setBounds_d6c21d5f84b2b38e,
                  mid_toString_e7df854526d67fa3,
                  max_mid
                };

                enum {
                  fid_numericConfig,
                  max_fid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static jfieldID *fids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PointRangeQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::AbstractRangeQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PointRangeQueryNode(const PointRangeQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::AbstractRangeQueryNode(obj) {}

                ::org::apache::lucene::queryparser::flexible::standard::config::PointsConfig _get_numericConfig() const;
                void _set_numericConfig(const ::org::apache::lucene::queryparser::flexible::standard::config::PointsConfig &) const;

                PointRangeQueryNode(const ::org::apache::lucene::queryparser::flexible::standard::nodes::PointQueryNode &, const ::org::apache::lucene::queryparser::flexible::standard::nodes::PointQueryNode &, jboolean, jboolean, const ::org::apache::lucene::queryparser::flexible::standard::config::PointsConfig &);

                ::org::apache::lucene::queryparser::flexible::standard::config::PointsConfig getPointsConfig() const;
                void setBounds(const ::org::apache::lucene::queryparser::flexible::standard::nodes::PointQueryNode &, const ::org::apache::lucene::queryparser::flexible::standard::nodes::PointQueryNode &, jboolean, jboolean, const ::org::apache::lucene::queryparser::flexible::standard::config::PointsConfig &) const;
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
              extern PyType_Def PY_TYPE_DEF(PointRangeQueryNode);
              extern PyTypeObject *PY_TYPE(PointRangeQueryNode);

              class t_PointRangeQueryNode {
              public:
                PyObject_HEAD
                PointRangeQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_PointRangeQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const PointRangeQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const PointRangeQueryNode&, PyTypeObject *);
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
