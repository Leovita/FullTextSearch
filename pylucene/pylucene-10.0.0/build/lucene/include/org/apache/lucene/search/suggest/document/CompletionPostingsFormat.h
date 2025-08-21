#ifndef org_apache_lucene_search_suggest_document_CompletionPostingsFormat_H
#define org_apache_lucene_search_suggest_document_CompletionPostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            class CompletionPostingsFormat$FSTLoadMode;
          }
        }
      }
      namespace codecs {
        class FieldsProducer;
        class FieldsConsumer;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class CompletionPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
             public:
              enum {
                mid_init$_0d82408c6e55bc30,
                mid_init$_ca58276e6079b252,
                mid_fieldsConsumer_19c1d7ed57faee5d,
                mid_fieldsProducer_1c13fe60e408387e,
                mid_delegatePostingsFormat_019d203d73665477,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionPostingsFormat(const CompletionPostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

              CompletionPostingsFormat(const ::java::lang::String &);
              CompletionPostingsFormat(const ::java::lang::String &, const ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat$FSTLoadMode &);

              ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
              ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(CompletionPostingsFormat);
            extern PyTypeObject *PY_TYPE(CompletionPostingsFormat);

            class t_CompletionPostingsFormat {
            public:
              PyObject_HEAD
              CompletionPostingsFormat object;
              static PyObject *wrap_Object(const CompletionPostingsFormat&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
