#ifndef org_apache_lucene_spatial3d_geom_SerializableObject_H
#define org_apache_lucene_spatial3d_geom_SerializableObject_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
    class OutputStream;
  }
  namespace util {
    class BitSet;
    class List;
  }
  namespace lang {
    class Class;
    class String;
    class ClassNotFoundException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPoint;
          class PlanetObject;
          class GeoPolygon;
          class SerializableObject;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class SerializableObject : public ::java::lang::Object {
           public:
            enum {
              mid_readBitSet_02824cfdf1da55d8,
              mid_readBoolean_77871f5299d2fb29,
              mid_readByteArray_227c59e41fe7dddf,
              mid_readClass_36b6ed29b76cc0b5,
              mid_readDouble_787b611a21f19f9a,
              mid_readHeterogeneousArray_c32025a5825274e3,
              mid_readHomogeneousArray_c32025a5825274e3,
              mid_readInt_ac3627efdcb64870,
              mid_readLong_2cddc88cd0fd4e25,
              mid_readObject_8985adbc01bf1dd0,
              mid_readObject_73aecc20b3294f4b,
              mid_readObject_b2f6ad324174d070,
              mid_readObject_d92c087e77ef9369,
              mid_readPlanetObject_81d9d3195cdef9ce,
              mid_readPointArray_87bd1f767bd8c997,
              mid_readPolygonArray_53cc8f3920b0a5e3,
              mid_readString_a4bc55af411bbdfe,
              mid_write_84831c9725b47eae,
              mid_writeBitSet_a4eff475532b70d9,
              mid_writeBoolean_a73ac245e9d314c5,
              mid_writeByteArray_bfb359c3e23df006,
              mid_writeClass_1761ff0a09565ed3,
              mid_writeDouble_7924036a5f24b58f,
              mid_writeHeterogeneousArray_2889b53dac23c208,
              mid_writeHeterogeneousArray_398a55594c8c4caf,
              mid_writeHomogeneousArray_2889b53dac23c208,
              mid_writeHomogeneousArray_398a55594c8c4caf,
              mid_writeInt_c6e1963ca7a79296,
              mid_writeLong_4d9c668a0424d8b1,
              mid_writeObject_f2161b7f95a830be,
              mid_writePlanetObject_62ad4a2110f0edfb,
              mid_writePointArray_74c10a346d7a5499,
              mid_writePointArray_398a55594c8c4caf,
              mid_writePolygonArray_be5f539ef3d828bc,
              mid_writePolygonArray_398a55594c8c4caf,
              mid_writeString_e799617583d72fe5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SerializableObject(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SerializableObject(const SerializableObject& obj) : ::java::lang::Object(obj) {}

            static ::java::util::BitSet readBitSet(const ::java::io::InputStream &);
            static jboolean readBoolean(const ::java::io::InputStream &);
            static JArray< jbyte > readByteArray(const ::java::io::InputStream &);
            static ::java::lang::Class readClass(const ::java::io::InputStream &);
            static jdouble readDouble(const ::java::io::InputStream &);
            static JArray< SerializableObject > readHeterogeneousArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static JArray< SerializableObject > readHomogeneousArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static jint readInt(const ::java::io::InputStream &);
            static jlong readLong(const ::java::io::InputStream &);
            static SerializableObject readObject(const ::java::io::InputStream &);
            static SerializableObject readObject(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static SerializableObject readObject(const ::java::io::InputStream &, const ::java::lang::Class &);
            static SerializableObject readObject(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static ::org::apache::lucene::spatial3d::geom::PlanetObject readPlanetObject(const ::java::io::InputStream &);
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > readPointArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPolygon > readPolygonArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static ::java::lang::String readString(const ::java::io::InputStream &);
            void write(const ::java::io::OutputStream &) const;
            static void writeBitSet(const ::java::io::OutputStream &, const ::java::util::BitSet &);
            static void writeBoolean(const ::java::io::OutputStream &, jboolean);
            static void writeByteArray(const ::java::io::OutputStream &, const JArray< jbyte > &);
            static void writeClass(const ::java::io::OutputStream &, const ::java::lang::Class &);
            static void writeDouble(const ::java::io::OutputStream &, jdouble);
            static void writeHeterogeneousArray(const ::java::io::OutputStream &, const JArray< SerializableObject > &);
            static void writeHeterogeneousArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeHomogeneousArray(const ::java::io::OutputStream &, const JArray< SerializableObject > &);
            static void writeHomogeneousArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeInt(const ::java::io::OutputStream &, jint);
            static void writeLong(const ::java::io::OutputStream &, jlong);
            static void writeObject(const ::java::io::OutputStream &, const SerializableObject &);
            static void writePlanetObject(const ::java::io::OutputStream &, const ::org::apache::lucene::spatial3d::geom::PlanetObject &);
            static void writePointArray(const ::java::io::OutputStream &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &);
            static void writePointArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writePolygonArray(const ::java::io::OutputStream &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPolygon > &);
            static void writePolygonArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeString(const ::java::io::OutputStream &, const ::java::lang::String &);
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
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(SerializableObject);
          extern PyTypeObject *PY_TYPE(SerializableObject);

          class t_SerializableObject {
          public:
            PyObject_HEAD
            SerializableObject object;
            static PyObject *wrap_Object(const SerializableObject&);
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
