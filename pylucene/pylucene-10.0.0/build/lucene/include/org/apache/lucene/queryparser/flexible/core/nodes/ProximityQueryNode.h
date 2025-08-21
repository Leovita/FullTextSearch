#ifndef org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/BooleanQueryNode.h"

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
              class QueryNode;
              class ProximityQueryNode$Type;
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
  namespace util {
    class List;
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
                  mid_init$_b1b50ffbbe9b0320,
                  mid_init$_f669bd79e2a17e37,
                  mid_cloneTree_7ba6641ec93d332a,
                  mid_getDistance_20fbf7565993c3d7,
                  mid_getField_373f0038978f926b,
                  mid_getFieldAsString_09a7afff1868fc5e,
                  mid_getProximityType_206575a92f8fce0f,
                  mid_isInOrder_947277eca0748c4e,
                  mid_setField_5ed8eb2e3024c663,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
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
