#ifndef org_apache_lucene_search_vectorhighlight_FieldTermStack$TermInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldTermStack$TermInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldTermStack$TermInfo;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldTermStack$TermInfo : public ::java::lang::Object {
           public:
            enum {
              mid_compareTo_3048a5a284eadfd7,
              mid_equals_570b5248a6da3ef6,
              mid_getEndOffset_20fbf7565993c3d7,
              mid_getNext_d2f66dfc6a2e75b1,
              mid_getPosition_20fbf7565993c3d7,
              mid_getStartOffset_20fbf7565993c3d7,
              mid_getText_09a7afff1868fc5e,
              mid_getWeight_9b6c3480dac00edf,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldTermStack$TermInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldTermStack$TermInfo(const FieldTermStack$TermInfo& obj) : ::java::lang::Object(obj) {}

            jint compareTo(const FieldTermStack$TermInfo &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getEndOffset() const;
            FieldTermStack$TermInfo getNext() const;
            jint getPosition() const;
            jint getStartOffset() const;
            ::java::lang::String getText() const;
            jfloat getWeight() const;
            jint hashCode() const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldTermStack$TermInfo);
          extern PyTypeObject *PY_TYPE(FieldTermStack$TermInfo);

          class t_FieldTermStack$TermInfo {
          public:
            PyObject_HEAD
            FieldTermStack$TermInfo object;
            static PyObject *wrap_Object(const FieldTermStack$TermInfo&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
