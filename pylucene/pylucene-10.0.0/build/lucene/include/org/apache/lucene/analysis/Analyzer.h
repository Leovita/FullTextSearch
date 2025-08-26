#ifndef org_apache_lucene_analysis_Analyzer_H
#define org_apache_lucene_analysis_Analyzer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
    class Reader;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class Analyzer$ReuseStrategy;
      }
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
      namespace analysis {

        class Analyzer : public ::java::lang::Object {
         public:
          enum {
            mid_close_e7bdbe105ce1bafb,
            mid_getOffsetGap_fa2a6f298bd618ab,
            mid_getPositionIncrementGap_fa2a6f298bd618ab,
            mid_getReuseStrategy_a029f0078c8c8c71,
            mid_normalize_8900299aff82cb20,
            mid_tokenStream_2682855e8736eda8,
            mid_tokenStream_5a0462238a148b1d,
            mid_createComponents_b734244e69a6c631,
            mid_initReader_9b0aaf55e5811bc6,
            mid_initReaderForNormalization_9b0aaf55e5811bc6,
            mid_attributeFactory_5f32c7c12dae06ab,
            mid_normalize_6c106c857ee0afd1,
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
