#ifndef org_apache_lucene_codecs_uniformsplit_IntersectBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_IntersectBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/BlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class TermsEnum$SeekStatus;
        class TermState;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class IntersectBlockReader : public ::org::apache::lucene::codecs::uniformsplit::BlockReader {
           public:
            enum {
              mid_next_9740fddd1c7df148,
              mid_seekCeil_69261b500ab5d3e8,
              mid_seekExact_f460ee421aade2fd,
              mid_seekExact_8b3d46852b435a94,
              mid_seekExact_5c001dd449c905b9,
              mid_getMinTermLength_20fbf7565993c3d7,
              mid_seekFirstBlock_947277eca0748c4e,
              mid_nextTermInBlockMatching_9740fddd1c7df148,
              mid_endsWithCommonSuffix_468dd27a44f7c451,
              mid_nextBlock_947277eca0748c4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntersectBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntersectBlockReader(const IntersectBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {}

            ::org::apache::lucene::util::BytesRef next() const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
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
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(IntersectBlockReader);
          extern PyTypeObject *PY_TYPE(IntersectBlockReader);

          class t_IntersectBlockReader {
          public:
            PyObject_HEAD
            IntersectBlockReader object;
            static PyObject *wrap_Object(const IntersectBlockReader&);
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
