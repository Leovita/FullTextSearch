#ifndef org_apache_lucene_analysis_TokenStream_H
#define org_apache_lucene_analysis_TokenStream_H

#include "org/apache/lucene/util/AttributeSource.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
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
            mid_close_3720c61b0679eb3e,
            mid_end_3720c61b0679eb3e,
            mid_incrementToken_947277eca0748c4e,
            mid_reset_3720c61b0679eb3e,
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
