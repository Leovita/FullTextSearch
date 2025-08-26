#ifndef org_apache_lucene_search_similarities_BasicStats_H
#define org_apache_lucene_search_similarities_BasicStats_H

#include "java/lang/Object.h"

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
        namespace similarities {

          class BasicStats : public ::java::lang::Object {
           public:
            enum {
              mid_init$_dbeaa7d1faf6f28f,
              mid_getAvgFieldLength_6fb37e123fed7a1f,
              mid_getBoost_6fb37e123fed7a1f,
              mid_getDocFreq_0f176418e3e16541,
              mid_getNumberOfDocuments_0f176418e3e16541,
              mid_getNumberOfFieldTokens_0f176418e3e16541,
              mid_getTotalTermFreq_0f176418e3e16541,
              mid_setAvgFieldLength_a03f734ddaeb69b4,
              mid_setDocFreq_1d3149fac12f2af3,
              mid_setNumberOfDocuments_1d3149fac12f2af3,
              mid_setNumberOfFieldTokens_1d3149fac12f2af3,
              mid_setTotalTermFreq_1d3149fac12f2af3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicStats(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BasicStats(const BasicStats& obj) : ::java::lang::Object(obj) {}

            BasicStats(const ::java::lang::String &, jdouble);

            jdouble getAvgFieldLength() const;
            jdouble getBoost() const;
            jlong getDocFreq() const;
            jlong getNumberOfDocuments() const;
            jlong getNumberOfFieldTokens() const;
            jlong getTotalTermFreq() const;
            void setAvgFieldLength(jdouble) const;
            void setDocFreq(jlong) const;
            void setNumberOfDocuments(jlong) const;
            void setNumberOfFieldTokens(jlong) const;
            void setTotalTermFreq(jlong) const;
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
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(BasicStats);
          extern PyTypeObject *PY_TYPE(BasicStats);

          class t_BasicStats {
          public:
            PyObject_HEAD
            BasicStats object;
            static PyObject *wrap_Object(const BasicStats&);
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
