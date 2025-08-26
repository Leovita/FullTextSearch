#ifndef org_apache_lucene_index_IndexFileNames_H
#define org_apache_lucene_index_IndexFileNames_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexFileNames : public ::java::lang::Object {
         public:
          enum {
            mid_fileNameFromGeneration_0bbe29ee43d0d63a,
            mid_getExtension_fef9c036acf290a9,
            mid_matchesExtension_8159c21a76bdf601,
            mid_parseGeneration_490f1686ea1cfda6,
            mid_parseSegmentName_fef9c036acf290a9,
            mid_segmentFileName_ce6f610a15d47a8b,
            mid_stripExtension_fef9c036acf290a9,
            mid_stripSegmentName_fef9c036acf290a9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexFileNames(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexFileNames(const IndexFileNames& obj) : ::java::lang::Object(obj) {}

          static ::java::util::regex::Pattern *CODEC_FILE_PATTERN;
          static ::java::lang::String *PENDING_SEGMENTS;
          static ::java::lang::String *SEGMENTS;

          static ::java::lang::String fileNameFromGeneration(const ::java::lang::String &, const ::java::lang::String &, jlong);
          static ::java::lang::String getExtension(const ::java::lang::String &);
          static jboolean matchesExtension(const ::java::lang::String &, const ::java::lang::String &);
          static jlong parseGeneration(const ::java::lang::String &);
          static ::java::lang::String parseSegmentName(const ::java::lang::String &);
          static ::java::lang::String segmentFileName(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
          static ::java::lang::String stripExtension(const ::java::lang::String &);
          static ::java::lang::String stripSegmentName(const ::java::lang::String &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexFileNames);
        extern PyTypeObject *PY_TYPE(IndexFileNames);

        class t_IndexFileNames {
        public:
          PyObject_HEAD
          IndexFileNames object;
          static PyObject *wrap_Object(const IndexFileNames&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
