#ifndef org_apache_lucene_analysis_shingle_ShingleFilter_H
#define org_apache_lucene_analysis_shingle_ShingleFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace shingle {

          class ShingleFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_4fe096967a533954,
              mid_init$_8418fe9e89083363,
              mid_init$_40ae3e19a9468a36,
              mid_init$_2184c5b3e9ae83b3,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              mid_setFillerToken_ee46a189998009d6,
              mid_setMaxShingleSize_8226bd0b0fc13dba,
              mid_setMinShingleSize_8226bd0b0fc13dba,
              mid_setOutputUnigrams_f5dd97eebf6a215a,
              mid_setOutputUnigramsIfNoShingles_f5dd97eebf6a215a,
              mid_setTokenSeparator_ee46a189998009d6,
              mid_setTokenType_ee46a189998009d6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ShingleFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ShingleFilter(const ShingleFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static ::java::lang::String *DEFAULT_FILLER_TOKEN;
            static jint DEFAULT_MAX_SHINGLE_SIZE;
            static jint DEFAULT_MIN_SHINGLE_SIZE;
            static ::java::lang::String *DEFAULT_TOKEN_SEPARATOR;
            static ::java::lang::String *DEFAULT_TOKEN_TYPE;

            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jint);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setFillerToken(const ::java::lang::String &) const;
            void setMaxShingleSize(jint) const;
            void setMinShingleSize(jint) const;
            void setOutputUnigrams(jboolean) const;
            void setOutputUnigramsIfNoShingles(jboolean) const;
            void setTokenSeparator(const ::java::lang::String &) const;
            void setTokenType(const ::java::lang::String &) const;
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
        namespace shingle {
          extern PyType_Def PY_TYPE_DEF(ShingleFilter);
          extern PyTypeObject *PY_TYPE(ShingleFilter);

          class t_ShingleFilter {
          public:
            PyObject_HEAD
            ShingleFilter object;
            static PyObject *wrap_Object(const ShingleFilter&);
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
