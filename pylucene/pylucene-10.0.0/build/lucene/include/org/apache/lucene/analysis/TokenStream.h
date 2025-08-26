#ifndef org_apache_lucene_analysis_TokenStream_H
#define org_apache_lucene_analysis_TokenStream_H

#include "org/apache/lucene/util/AttributeSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class TokenStream : public ::org::apache::lucene::util::AttributeSource {
         public:
          enum {
            mid_close_e7bdbe105ce1bafb,
            mid_end_e7bdbe105ce1bafb,
            mid_incrementToken_9aa4f33e82ea333f,
            mid_reset_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenStream(jobject obj) : ::org::apache::lucene::util::AttributeSource(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenStream(const TokenStream& obj) : ::org::apache::lucene::util::AttributeSource(obj) {}

          static ::org::apache::lucene::util::AttributeFactory *DEFAULT_TOKEN_ATTRIBUTE_FACTORY;

          void close() const;
          void end() const;
          jboolean incrementToken() const;
          void reset() const;
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
        extern PyType_Def PY_TYPE_DEF(TokenStream);
        extern PyTypeObject *PY_TYPE(TokenStream);

        class t_TokenStream {
        public:
          PyObject_HEAD
          TokenStream object;
          static PyObject *wrap_Object(const TokenStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
