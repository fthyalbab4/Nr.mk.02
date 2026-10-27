// rea decompile_all
// name: FUN_005baaf4
// address: 0x5baaf4
// body: available
// range: 0x5baaf4-0x5bacf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bab24 (push 0x5bacf5 followed by fs-segment stack chaining); handler 0x5bacf5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005baaf4(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  float10 fVar6;
  float10 fVar7;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_1c [2];
  double local_14;
  undefined4 local_c;

  piVar5 = local_1c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  puStack_34 = (undefined1 *)0x5bab19;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_38 = &LAB_005bacf5;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if (local_1c[0] == 0) {
    puStack_34 = &stack0xfffffffc;
    uVar2 = FUN_004048b8();
    if (_DAT_005bad04 <= ABS((float10)local_14 - (float10)CONCAT44(extraout_EDX,uVar2))) {
      uVar2 = FUN_004048b8();
      fVar6 = ABS((float10)100.0 * (float10)local_14 - (float10)CONCAT44(extraout_EDX_00,uVar2));
      if (_DAT_005bad04 < fVar6 || (_DAT_005bad04 == fVar6) != 0) {
        uVar2 = FUN_004048b8();
        fVar6 = ABS((float10)10000.0 * (float10)local_14 - (float10)CONCAT44(extraout_EDX_01,uVar2))
        ;
        if (_DAT_005bad04 < fVar6 || (_DAT_005bad04 == fVar6) != 0) {
          uVar2 = FUN_004048b8();
          fVar6 = ABS((float10)1e+06 * (float10)local_14 - (float10)CONCAT44(extraout_EDX_02,uVar2))
          ;
          if (_DAT_005bad04 < fVar6 || (_DAT_005bad04 == fVar6) != 0) {
            uVar2 = FUN_004048b8();
            fVar6 = ABS((float10)1e+08 * (float10)local_14 -
                        (float10)CONCAT44(extraout_EDX_03,uVar2));
            uVar3 = (undefined3)
                    (CONCAT22((short)((uint)uVar2 >> 0x10),
                              (ushort)(_DAT_005bad04 < fVar6) << 8 |
                              (ushort)(NAN(_DAT_005bad04) || NAN(fVar6)) << 10 |
                              (ushort)(_DAT_005bad04 == fVar6) << 0xe) >> 8);
            if (_DAT_005bad04 < fVar6 == 0 && (_DAT_005bad04 == fVar6) == 0) {
              fVar6 = (float10)local_14;
              FUN_00418ec8(CONCAT31(uVar3,2),10,8,param_2,SUB104(fVar6,0),
                           (int)((unkuint10)fVar6 >> 0x20),(short)((unkuint10)fVar6 >> 0x40));
            }
            else {
              fVar6 = (float10)local_14;
              FUN_00418ec8(CONCAT31(uVar3,2),10,10,param_2,SUB104(fVar6,0),
                           (int)((unkuint10)fVar6 >> 0x20),(short)((unkuint10)fVar6 >> 0x40));
            }
          }
          else {
            fVar7 = (float10)local_14;
            FUN_00418ec8(CONCAT31((int3)(CONCAT22((short)((uint)uVar2 >> 0x10),
                                                  (ushort)(_DAT_005bad04 < fVar6) << 8 |
                                                  (ushort)(NAN(_DAT_005bad04) || NAN(fVar6)) << 10 |
                                                  (ushort)(_DAT_005bad04 == fVar6) << 0xe) >> 8),2),
                         10,6,param_2,SUB104(fVar7,0),(int)((unkuint10)fVar7 >> 0x20),
                         (short)((unkuint10)fVar7 >> 0x40));
          }
        }
        else {
          fVar7 = (float10)local_14;
          FUN_00418ec8(CONCAT31((int3)(CONCAT22((short)((uint)uVar2 >> 0x10),
                                                (ushort)(_DAT_005bad04 < fVar6) << 8 |
                                                (ushort)(NAN(_DAT_005bad04) || NAN(fVar6)) << 10 |
                                                (ushort)(_DAT_005bad04 == fVar6) << 0xe) >> 8),2),10
                       ,4,param_2,SUB104(fVar7,0),(int)((unkuint10)fVar7 >> 0x20),
                       (short)((unkuint10)fVar7 >> 0x40));
        }
      }
      else {
        fVar7 = (float10)local_14;
        FUN_00418ec8(CONCAT31((int3)(CONCAT22((short)((uint)uVar2 >> 0x10),
                                              (ushort)(_DAT_005bad04 < fVar6) << 8 |
                                              (ushort)(NAN(_DAT_005bad04) || NAN(fVar6)) << 10 |
                                              (ushort)(_DAT_005bad04 == fVar6) << 0xe) >> 8),2),10,2
                     ,param_2,SUB104(fVar7,0),(int)((unkuint10)fVar7 >> 0x20),
                     (short)((unkuint10)fVar7 >> 0x40));
      }
    }
    else {
      FUN_004048b8();
      FUN_004165b0(param_2);
    }
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_004083c0(param_2,local_c);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005bacfc;
  puStack_38 = (undefined1 *)0x5bacf4;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
