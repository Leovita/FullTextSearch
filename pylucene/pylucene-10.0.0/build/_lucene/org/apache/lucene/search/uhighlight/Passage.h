#ifndef org_apache_lucene_search_uhighlight_Passage_H
#define org_apache_lucene_search_uhighlight_Passage_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_addMatch_cfcd4ea1529eeae3,
              mid_getEndOffset_bd89ce15dad49192,
              mid_getLength_bd89ce15dad49192,
              mid_getMatchEnds_4b72a28a860ae838,
              mid_getMatchStarts_4b72a28a860ae838,
              mid_getMatchTermFreqsInDoc_4b72a28a860ae838,
              mid_getMatchTerms_cb1c5650e8bc510b,
              mid_getNumMatches_bd89ce15dad49192,
              mid_getScore_8b62236f0e4d0dbc,
              mid_getStartOffset_bd89ce15dad49192,
              mid_reset_e7bdbe105ce1bafb,
              mid_setEndOffset_8226bd0b0fc13dba,
              mid_setScore_675f4cb9a2529ee0,
              mid_setStartOffset_8226bd0b0fc13dba,
              mid_toString_e7df854526d67fa3,
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
