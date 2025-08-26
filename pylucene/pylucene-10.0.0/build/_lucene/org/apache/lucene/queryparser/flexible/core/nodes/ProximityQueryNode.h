#ifndef org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/BooleanQueryNode.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class CloneNotSupportedException;
  }
  namespace util {
    class List;
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
              class ProximityQueryNode$Type;
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

              class ProximityQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode {
               public:
                enum {
                  mid_init$_4c7f9f990e710021,
                  mid_init$_4b027672c1849531,
                  mid_cloneTree_1a37a44f7f2f5350,
                  mid_getDistance_bd89ce15dad49192,
                  mid_getField_f2e5418fe0d66c69,
                  mid_getFieldAsString_e7df854526d67fa3,
                  mid_getProximityType_23b5a1d0f3278935,
                  mid_isInOrder_9aa4f33e82ea333f,
                  mid_setField_fe2ab7d27aa3fe1a,
                  mid_toQueryString_5260f1dc7a86fc8d,
                  mid_toString_e7df854526d67fa3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ProximityQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ProximityQueryNode(const ProximityQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {}

                ProximityQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, const ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type &, jboolean);
                ProximityQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, const ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type &, jint, jboolean);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                jint getDistance() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type getProximityType() const;
                jboolean isInOrder() const;
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
          namespace core {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(ProximityQueryNode);
              extern PyTypeObject *PY_TYPE(ProximityQueryNode);

              class t_ProximityQueryNode {
              public:
                PyObject_HEAD
                ProximityQueryNode object;
                static PyObject *wrap_Object(const ProximityQueryNode&);
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
