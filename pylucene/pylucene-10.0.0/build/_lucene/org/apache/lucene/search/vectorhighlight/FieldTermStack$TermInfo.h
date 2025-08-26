#ifndef org_apache_lucene_search_vectorhighlight_FieldTermStack$TermInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldTermStack$TermInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
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
              mid_compareTo_8154b2a2eb020a8d,
              mid_equals_00d17418847797d4,
              mid_getEndOffset_bd89ce15dad49192,
              mid_getNext_926e508f246bbf88,
              mid_getPosition_bd89ce15dad49192,
              mid_getStartOffset_bd89ce15dad49192,
              mid_getText_e7df854526d67fa3,
              mid_getWeight_8b62236f0e4d0dbc,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
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
