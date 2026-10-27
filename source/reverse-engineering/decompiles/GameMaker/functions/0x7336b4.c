// rea decompile_all
// name: FUN_007336b4
// address: 0x7336b4
// body: available
// range: 0x7336b4-0x733a4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_007336b4(int *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;

  iVar4 = *param_1;
  if ((iVar4 != 0) && (*(short *)(iVar4 + -10) != 1)) {
    iVar4 = FUN_00407078(param_1,*param_1,0,param_3);
  }
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + -4);
  }
  bVar3 = (byte)param_3;
  if (param_3 < 0x80) {
    if ((*param_2 < 1) || (iVar5 < *param_2)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    uVar6 = (uint)bVar1;
    if (bVar1 != 0) {
      iVar4 = thunk_FUN_00407688(param_1);
      *(byte *)(iVar4 + -1 + *param_2) = bVar3;
      *param_2 = *param_2 + 1;
    }
  }
  else if (param_3 < 0x800) {
    if ((*param_2 < 1) || (iVar5 <= *param_2)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    uVar6 = (uint)bVar1;
    if (bVar1 != 0) {
      iVar4 = thunk_FUN_00407688(param_1);
      *(byte *)(iVar4 + -1 + *param_2) = (byte)(param_3 >> 6) | 0xc0;
      iVar4 = thunk_FUN_00407688(param_1);
      *(byte *)(iVar4 + *param_2) = bVar3 & 0x3f | 0x80;
      *param_2 = *param_2 + 2;
    }
  }
  else if (param_3 < 0x10000) {
    if ((*param_2 < 1) || (iVar5 + -1 <= *param_2)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    uVar6 = (uint)bVar1;
    if (bVar1 != 0) {
      iVar4 = thunk_FUN_00407688(param_1);
      *(byte *)(iVar4 + -1 + *param_2) = (byte)(param_3 >> 0xc) | 0xe0;
      iVar4 = thunk_FUN_00407688(param_1);
      *(byte *)(iVar4 + *param_2) = (byte)(param_3 >> 6) & 0x3f | 0x80;
      iVar4 = thunk_FUN_00407688(param_1);
      *(byte *)(iVar4 + 1 + *param_2) = bVar3 & 0x3f | 0x80;
      *param_2 = *param_2 + 3;
    }
  }
  else if (param_3 < 0x200000) {
    if ((*param_2 < 1) || (iVar5 + -2 <= *param_2)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    uVar6 = (uint)bVar1;
    if (bVar1 != 0) {
      iVar4 = thunk_FUN_00407688(param_1);
      *(byte *)(iVar4 + -1 + *param_2) = (byte)(param_3 >> 0x12) | 0xf0;
      iVar4 = thunk_FUN_00407688(param_1);
      *(byte *)(iVar4 + *param_2) = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
      iVar4 = thunk_FUN_00407688(param_1);
      *(byte *)(iVar4 + 1 + *param_2) = (byte)(param_3 >> 6) & 0x3f | 0x80;
      iVar4 = thunk_FUN_00407688(param_1);
      *(byte *)(iVar4 + 2 + *param_2) = bVar3 & 0x3f | 0x80;
      *param_2 = *param_2 + 4;
    }
  }
  else {
    bVar1 = (byte)(param_3 >> 0x18);
    if (param_3 < 0x4000000) {
      if ((*param_2 < 1) || (iVar5 + -2 <= *param_2)) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
      }
      uVar6 = (uint)bVar2;
      if (bVar2 != 0) {
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + -1 + *param_2) = bVar1 | 0xf8;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + *param_2) = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + 1 + *param_2) = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + 2 + *param_2) = (byte)(param_3 >> 6) & 0x3f | 0x80;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + 3 + *param_2) = bVar3 & 0x3f | 0x80;
        *param_2 = *param_2 + 5;
      }
    }
    else if (*(uint *)PTR_DAT_00781c08 < param_3) {
      if ((*param_2 < 1) || (iVar5 + -1 <= *param_2)) {
        bVar3 = 0;
      }
      else {
        bVar3 = 1;
      }
      uVar6 = (uint)bVar3;
      if (bVar3 != 0) {
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + -1 + *param_2) = (byte)(*(uint *)PTR_DAT_00781c78 >> 0xc) | 0xe0;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + *param_2) = (byte)(*(uint *)PTR_DAT_00781c78 >> 6) & 0x3f | 0x80;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + 1 + *param_2) = *PTR_DAT_00781c78 & 0x3f | 0x80;
        *param_2 = *param_2 + 3;
      }
    }
    else {
      if ((*param_2 < 1) || (iVar5 + -3 <= *param_2)) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
      }
      uVar6 = (uint)bVar2;
      if (bVar2 != 0) {
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + -1 + *param_2) = bVar1 >> 6 | 0xfc;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + *param_2) = bVar1 & 0x3f | 0x80;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + 1 + *param_2) = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + 2 + *param_2) = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + 3 + *param_2) = (byte)(param_3 >> 6) & 0x3f | 0x80;
        iVar4 = thunk_FUN_00407688(param_1);
        *(byte *)(iVar4 + 4 + *param_2) = bVar3 & 0x3f | 0x80;
        *param_2 = *param_2 + 6;
      }
    }
  }
  return uVar6 & 0xff;
}
