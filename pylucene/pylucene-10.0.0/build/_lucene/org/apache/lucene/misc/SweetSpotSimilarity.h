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
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_f5dd97eebf6a215a,
            mid_baselineTf_760c23641efab431,
            mid_hyperbolicTf_760c23641efab431,
            mid_lengthNorm_5873a23b935a9d49,
            mid_setBaselineTfFactors_cb7687d0612879b8,
            mid_setHyperbolicTfFactors_2aa8aaf7db08adc9,
            mid_setLengthNormFactors_637d040f0f81bc84,
            mid_tf_760c23641efab431,
            mid_toString_e7df854526d67fa3,
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
