#ifndef org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode_H

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
              class QueryNode;
              class PathQueryNode$QueryText;
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

              class PathQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_9425cd4f62c94bce,
                  mid_cloneTree_7ba6641ec93d332a,
                  mid_getFirstPathElement_373f0038978f926b,
                  mid_getPathElement_e01b44046d4cb653,
                  mid_getPathElements_36830460e10839eb,
                  mid_getPathElements_3e47fe599d76d583,
                  mid_setPathElements_9425cd4f62c94bce,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
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
