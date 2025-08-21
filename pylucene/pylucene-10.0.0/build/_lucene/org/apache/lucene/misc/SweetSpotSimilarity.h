#ifndef org_apache_lucene_misc_SweetSpotSimilarity_H
#define org_apache_lucene_misc_SweetSpotSimilarity_H

#include "org/apache/lucene/search/similarities/ClassicSimilarity.h"

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
      namespace misc {

        class SweetSpotSimilarity : public ::org::apache::lucene::search::similarities::ClassicSimilarity {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_b110fc3a58c081ab,
            mid_baselineTf_8fa359a2bc20a127,
            mid_hyperbolicTf_8fa359a2bc20a127,
            mid_lengthNorm_29cfa01aaad92564,
            mid_setBaselineTfFactors_13cb7e72f513d797,
            mid_setHyperbolicTfFactors_2bbcbde4855ac067,
            mid_setLengthNormFactors_c891bbfbb935732a,
            mid_tf_8fa359a2bc20a127,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SweetSpotSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SweetSpotSimilarity(const SweetSpotSimilarity& obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {}

          SweetSpotSimilarity();
          SweetSpotSimilarity(jboolean);

          jfloat baselineTf(jfloat) const;
          jfloat hyperbolicTf(jfloat) const;
          jfloat lengthNorm(jint) const;
          void setBaselineTfFactors(jfloat, jfloat) const;
          void setHyperbolicTfFactors(jfloat, jfloat, jdouble, jfloat) const;
          void setLengthNormFactors(jint, jint, jfloat) const;
          jfloat tf(jfloat) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        extern PyType_Def PY_TYPE_DEF(SweetSpotSimilarity);
        extern PyTypeObject *PY_TYPE(SweetSpotSimilarity);

        class t_SweetSpotSimilarity {
        public:
          PyObject_HEAD
          SweetSpotSimilarity object;
          static PyObject *wrap_Object(const SweetSpotSimilarity&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
