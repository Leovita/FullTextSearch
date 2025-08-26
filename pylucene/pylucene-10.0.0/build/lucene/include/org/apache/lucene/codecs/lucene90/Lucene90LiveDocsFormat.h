#ifndef org_apache_lucene_codecs_lucene90_Lucene90LiveDocsFormat_H
#define org_apache_lucene_codecs_lucene90_Lucene90LiveDocsFormat_H

#include "org/apache/lucene/codecs/LiveDocsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace util {
        class Bits;
      }
      namespace index {
        class SegmentCommitInfo;
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
    class IOException;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {

          class Lucene90LiveDocsFormat : public ::org::apache::lucene::codecs::LiveDocsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_files_0f92fd81714b4d0e,
              mid_readLiveDocs_a6e367a10af13e52,
              mid_writeLiveDocs_f93b608310103666,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90LiveDocsFormat(jobject obj) : ::org::apache::lucene::codecs::LiveDocsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90LiveDocsFormat(const Lucene90LiveDocsFormat& obj) : ::org::apache::lucene::codecs::LiveDocsFormat(obj) {}

            Lucene90LiveDocsFormat();

            void files(const ::org::apache::lucene::index::SegmentCommitInfo &, const ::java::util::Collection &) const;
            ::org::apache::lucene::util::Bits readLiveDocs(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentCommitInfo &, const ::org::apache::lucene::store::IOContext &) const;
            void writeLiveDocs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentCommitInfo &, jint, const ::org::apache::lucene::store::IOContext &) const;
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
      namespace codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90LiveDocsFormat);
          extern PyTypeObject *PY_TYPE(Lucene90LiveDocsFormat);

          class t_Lucene90LiveDocsFormat {
          public:
            PyObject_HEAD
            Lucene90LiveDocsFormat object;
            static PyObject *wrap_Object(const Lucene90LiveDocsFormat&);
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
