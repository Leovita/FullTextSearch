#ifndef org_apache_lucene_search_uhighlight_Passage_H
#define org_apache_lucene_search_uhighlight_Passage_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class Passage : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_addMatch_19a1c2247f6f083f,
              mid_getEndOffset_20fbf7565993c3d7,
              mid_getLength_20fbf7565993c3d7,
              mid_getMatchEnds_623cd4a044ba647a,
              mid_getMatchStarts_623cd4a044ba647a,
              mid_getMatchTermFreqsInDoc_623cd4a044ba647a,
              mid_getMatchTerms_15e86a23d022d444,
              mid_getNumMatches_20fbf7565993c3d7,
              mid_getScore_9b6c3480dac00edf,
              mid_getStartOffset_20fbf7565993c3d7,
              mid_reset_3720c61b0679eb3e,
              mid_setEndOffset_540b2b23d51b1efd,
              mid_setScore_c771a95b0227fb6a,
              mid_setStartOffset_540b2b23d51b1efd,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Passage(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Passage(const Passage& obj) : ::java::lang::Object(obj) {}

            Passage();

            void addMatch(jint, jint, const ::org::apache::lucene::util::BytesRef &, jint) const;
            jint getEndOffset() const;
            jint getLength() const;
            JArray< jint > getMatchEnds() const;
            JArray< jint > getMatchStarts() const;
            JArray< jint > getMatchTermFreqsInDoc() const;
            JArray< ::org::apache::lucene::util::BytesRef > getMatchTerms() const;
            jint getNumMatches() const;
            jfloat getScore() const;
            jint getStartOffset() const;
            void reset() const;
            void setEndOffset(jint) const;
            void setScore(jfloat) const;
            void setStartOffset(jint) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(Passage);
          extern PyTypeObject *PY_TYPE(Passage);

          class t_Passage {
          public:
            PyObject_HEAD
            Passage object;
            static PyObject *wrap_Object(const Passage&);
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
