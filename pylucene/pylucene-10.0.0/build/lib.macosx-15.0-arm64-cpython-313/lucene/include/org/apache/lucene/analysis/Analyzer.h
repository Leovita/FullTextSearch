#ifndef org_apache_lucene_analysis_Analyzer_H
#define org_apache_lucene_analysis_Analyzer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace analysis {
        class Analyzer$ReuseStrategy;
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Closeable;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class Analyzer : public ::java::lang::Object {
         public:
          enum {
            mid_close_3720c61b0679eb3e,
            mid_getOffsetGap_3f230d713d7fd2b0,
            mid_getPositionIncrementGap_3f230d713d7fd2b0,
            mid_getReuseStrategy_1978b9ca4b04cd3d,
            mid_normalize_be53d293a09552c8,
            mid_tokenStream_10b4d55b5f103129,
            mid_tokenStream_4138e4a541e1e210,
            mid_createComponents_f774fffda992519d,
            mid_initReader_f755529383524495,
            mid_initReaderForNormalization_f755529383524495,
            mid_attributeFactory_32e9e9f90ba9887a,
            mid_normalize_9793d650e44fa07f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Analyzer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Analyzer(const Analyzer& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::analysis::Analyzer$ReuseStrategy *GLOBAL_REUSE_STRATEGY;
          static ::org::apache::lucene::analysis::Analyzer$ReuseStrategy *PER_FIELD_REUSE_STRATEGY;

          void close() const;
          jint getOffsetGap(const ::java::lang::String &) const;
          jint getPositionIncrementGap(const ::java::lang::String &) const;
          ::org::apache::lucene::analysis::Analyzer$ReuseStrategy getReuseStrategy() const;
          ::org::apache::lucene::util::BytesRef normalize(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::java::lang::String &, const ::java::io::Reader &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::java::lang::String &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(Analyzer);
        extern PyTypeObject *PY_TYPE(Analyzer);

        class t_Analyzer {
        public:
          PyObject_HEAD
          Analyzer object;
          static PyObject *wrap_Object(const Analyzer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
