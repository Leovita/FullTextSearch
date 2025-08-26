#ifndef org_apache_lucene_codecs_KnnVectorsFormat_H
#define org_apache_lucene_codecs_KnnVectorsFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
      namespace codecs {
        class KnnVectorsWriter;
        class KnnVectorsFormat;
        class KnnVectorsReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class KnnVectorsFormat : public ::java::lang::Object {
         public:
          enum {
            mid_availableKnnVectorsFormats_79131c6bbcf08916,
            mid_fieldsReader_e6e9752d6bb75a3c,
            mid_fieldsWriter_cb1e4b426784850b,
            mid_forName_a99403b582f28782,
            mid_getMaxDimensions_fa2a6f298bd618ab,
            mid_getName_e7df854526d67fa3,
            mid_reloadKnnVectorsFormat_d603563f542d31ba,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorsFormat(const KnnVectorsFormat& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_MAX_DIMENSIONS;
          static KnnVectorsFormat *EMPTY;

          static ::java::util::Set availableKnnVectorsFormats();
          ::org::apache::lucene::codecs::KnnVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
          ::org::apache::lucene::codecs::KnnVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
          static KnnVectorsFormat forName(const ::java::lang::String &);
          jint getMaxDimensions(const ::java::lang::String &) const;
          ::java::lang::String getName() const;
          static void reloadKnnVectorsFormat(const ::java::lang::ClassLoader &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(KnnVectorsFormat);
        extern PyTypeObject *PY_TYPE(KnnVectorsFormat);

        class t_KnnVectorsFormat {
        public:
          PyObject_HEAD
          KnnVectorsFormat object;
          static PyObject *wrap_Object(const KnnVectorsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
