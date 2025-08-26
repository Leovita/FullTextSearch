#ifndef org_apache_lucene_queryparser_flexible_core_nodes_AnyQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_AnyQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/AndQueryNode.h"

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

              class AnyQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::AndQueryNode {
               public:
                enum {
                  mid_init$_b484d0e4dfb245dc,
                  mid_cloneTree_1a37a44f7f2f5350,
                  mid_getField_f2e5418fe0d66c69,
                  mid_getFieldAsString_e7df854526d67fa3,
                  mid_getMinimumMatchingElements_bd89ce15dad49192,
                  mid_setField_fe2ab7d27aa3fe1a,
                  mid_toQueryString_5260f1dc7a86fc8d,
                  mid_toString_e7df854526d67fa3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AnyQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::AndQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AnyQueryNode(const AnyQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::AndQueryNode(obj) {}

                AnyQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, jint);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                jint getMinimumMatchingElements() const;
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
              extern PyType_Def PY_TYPE_DEF(AnyQueryNode);
              extern PyTypeObject *PY_TYPE(AnyQueryNode);

              class t_AnyQueryNode {
              public:
                PyObject_HEAD
                AnyQueryNode object;
                static PyObject *wrap_Object(const AnyQueryNode&);
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
