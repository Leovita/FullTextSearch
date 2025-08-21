#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FieldQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FieldQueryNode_H

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
              class TextableQueryNode;
              class FieldValuePairQueryNode;
              class FieldQueryNode;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {

              class FieldQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_b974a1b06f039814,
                  mid_cloneTree_2e4560e4486593c1,
                  mid_getBegin_20fbf7565993c3d7,
                  mid_getEnd_20fbf7565993c3d7,
                  mid_getField_373f0038978f926b,
                  mid_getFieldAsString_09a7afff1868fc5e,
                  mid_getPositionIncrement_20fbf7565993c3d7,
                  mid_getText_373f0038978f926b,
                  mid_getTextAsString_09a7afff1868fc5e,
                  mid_getValue_373f0038978f926b,
                  mid_setBegin_540b2b23d51b1efd,
                  mid_setEnd_540b2b23d51b1efd,
                  mid_setField_5ed8eb2e3024c663,
                  mid_setPositionIncrement_540b2b23d51b1efd,
                  mid_setText_5ed8eb2e3024c663,
                  mid_setValue_5ed8eb2e3024c663,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
                  mid_getTermEscaped_d4d5dbebf21f5529,
                  mid_getTermEscapeQuoted_d4d5dbebf21f5529,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FieldQueryNode(const FieldQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                FieldQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                FieldQueryNode cloneTree() const;
                jint getBegin() const;
                jint getEnd() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                jint getPositionIncrement() const;
                ::java::lang::CharSequence getText() const;
                ::java::lang::String getTextAsString() const;
                ::java::lang::CharSequence getValue() const;
                void setBegin(jint) const;
                void setEnd(jint) const;
                void setField(const ::java::lang::CharSequence &) const;
                void setPositionIncrement(jint) const;
                void setText(const ::java::lang::CharSequence &) const;
                void setValue(const ::java::lang::CharSequence &) const;
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
              extern PyType_Def PY_TYPE_DEF(FieldQueryNode);
              extern PyTypeObject *PY_TYPE(FieldQueryNode);

              class t_FieldQueryNode {
              public:
                PyObject_HEAD
                FieldQueryNode object;
                static PyObject *wrap_Object(const FieldQueryNode&);
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
