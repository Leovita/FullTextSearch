#ifndef org_apache_lucene_analysis_util_CharArrayIterator_H
#define org_apache_lucene_analysis_util_CharArrayIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharArrayIterator;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharArrayIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_clone_3d7807367ca68e39,
              mid_current_15a06771db8cb866,
              mid_first_15a06771db8cb866,
              mid_getBeginIndex_bd89ce15dad49192,
              mid_getEndIndex_bd89ce15dad49192,
              mid_getIndex_bd89ce15dad49192,
              mid_getLength_bd89ce15dad49192,
              mid_getStart_bd89ce15dad49192,
              mid_getText_e5926045e1917c62,
              mid_last_15a06771db8cb866,
              mid_newSentenceInstance_3d7807367ca68e39,
              mid_newWordInstance_3d7807367ca68e39,
              mid_next_15a06771db8cb866,
              mid_previous_15a06771db8cb866,
              mid_setIndex_bc94dd98365f92fb,
              mid_setText_186bb5d1c1aec30c,
              mid_jreBugWorkaround_7906d8bb50c3bcd1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharArrayIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharArrayIterator(const CharArrayIterator& obj) : ::java::lang::Object(obj) {}

            static jboolean HAS_BUGGY_BREAKITERATORS;

            CharArrayIterator();

            CharArrayIterator clone() const;
            jchar current() const;
            jchar first() const;
            jint getBeginIndex() const;
            jint getEndIndex() const;
            jint getIndex() const;
            jint getLength() const;
            jint getStart() const;
            JArray< jchar > getText() const;
            jchar last() const;
            static CharArrayIterator newSentenceInstance();
            static CharArrayIterator newWordInstance();
            jchar next() const;
            jchar previous() const;
            jchar setIndex(jint) const;
            void setText(const JArray< jchar > &, jint, jint) const;
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
      namespace analysis {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(CharArrayIterator);
          extern PyTypeObject *PY_TYPE(CharArrayIterator);

          class t_CharArrayIterator {
          public:
            PyObject_HEAD
            CharArrayIterator object;
            static PyObject *wrap_Object(const CharArrayIterator&);
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
