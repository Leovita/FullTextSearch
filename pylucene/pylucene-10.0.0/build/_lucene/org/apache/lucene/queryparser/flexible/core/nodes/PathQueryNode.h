#ifndef org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class PathQueryNode$QueryText;
              class QueryNode;
            }
            namespace parser {
              class EscapeQuerySyntax;
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
    class String;
    class CharSequence;
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

              class PathQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_acbb405b60a30822,
                  mid_cloneTree_1a37a44f7f2f5350,
                  mid_getFirstPathElement_f2e5418fe0d66c69,
                  mid_getPathElement_0815a80cb72dd61f,
                  mid_getPathElements_1387e1e2702ac173,
                  mid_getPathElements_b4b9401c877452e3,
                  mid_setPathElements_acbb405b60a30822,
                  mid_toQueryString_5260f1dc7a86fc8d,
                  mid_toString_e7df854526d67fa3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PathQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PathQueryNode(const PathQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                PathQueryNode(const ::java::util::List &);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                ::java::lang::CharSequence getFirstPathElement() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::PathQueryNode$QueryText getPathElement(jint) const;
                ::java::util::List getPathElements() const;
                ::java::util::List getPathElements(jint) const;
                void setPathElements(const ::java::util::List &) const;
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
              extern PyType_Def PY_TYPE_DEF(PathQueryNode);
              extern PyTypeObject *PY_TYPE(PathQueryNode);

              class t_PathQueryNode {
              public:
                PyObject_HEAD
                PathQueryNode object;
                static PyObject *wrap_Object(const PathQueryNode&);
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
