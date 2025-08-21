#ifndef org_apache_lucene_codecs_lucene90_Lucene90LiveDocsFormat_H
#define org_apache_lucene_codecs_lucene90_Lucene90LiveDocsFormat_H

#include "org/apache/lucene/codecs/LiveDocsFormat.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class SegmentCommitInfo;
      }
      namespace store {
        class IOContext;
        class Directory;
      }
    }
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
              mid_init$_3720c61b0679eb3e,
              mid_files_6cafd307f1966789,
              mid_readLiveDocs_25c5126636ada09e,
              mid_writeLiveDocs_aa6e7f68a55b3638,
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
