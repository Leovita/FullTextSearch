#ifndef org_apache_lucene_queryparser_flexible_core_nodes_AnyQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_AnyQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/AndQueryNode.h"

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

              class AnyQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::AndQueryNode {
               public:
                enum {
                  mid_init$_c35d0f530b5740cf,
                  mid_cloneTree_7ba6641ec93d332a,
                  mid_getField_373f0038978f926b,
                  mid_getFieldAsString_09a7afff1868fc5e,
                  mid_getMinimumMatchingElements_20fbf7565993c3d7,
                  mid_setField_5ed8eb2e3024c663,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
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
