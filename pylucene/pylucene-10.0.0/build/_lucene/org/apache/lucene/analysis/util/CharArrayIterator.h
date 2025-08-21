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
              mid_init$_3720c61b0679eb3e,
              mid_clone_c09c77c447eb1c42,
              mid_current_6c956faefc706166,
              mid_first_6c956faefc706166,
              mid_getBeginIndex_20fbf7565993c3d7,
              mid_getEndIndex_20fbf7565993c3d7,
              mid_getIndex_20fbf7565993c3d7,
              mid_getLength_20fbf7565993c3d7,
              mid_getStart_20fbf7565993c3d7,
              mid_getText_77d52ded526199de,
              mid_last_6c956faefc706166,
              mid_newSentenceInstance_c09c77c447eb1c42,
              mid_newWordInstance_c09c77c447eb1c42,
              mid_next_6c956faefc706166,
              mid_previous_6c956faefc706166,
              mid_setIndex_92a13ce4196a7e69,
              mid_setText_fc9be2ded8ee801f,
              mid_jreBugWorkaround_37d3198655206162,
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
