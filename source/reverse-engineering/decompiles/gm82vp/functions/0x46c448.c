// rea decompile_all
// name: FUN_0046c448
// address: 0x46c448
// body: available
// range: 0x46c448-0x46c692 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c448(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_c;

  local_c = 0;
  if (param_1[0x21] < 1) {
    uVar2 = param_3 + 5;
    uVar3 = uVar2;
  }
  else {
    if ((param_3 != 0) && (*(int *)(*param_1 + 0x2c) == 2)) {
      FUN_0046cbe0(param_1);
    }
    FUN_0046b3c0(param_1,param_1 + 0x2c6);
    FUN_0046b3c0(param_1,param_1 + 0x2c9);
    local_c = FUN_0046bd64(param_1);
    uVar2 = param_1[0x5aa] + 10U >> 3;
    uVar3 = param_1[0x5ab] + 10U >> 3;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
  }
  if ((uVar2 < param_3 + 4U) || (param_2 == 0)) {
    if ((param_1[0x22] == 4) || (uVar2 == uVar3)) {
      if (param_1[0x5af] < 0xe) {
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (short)param_4 + 2 << ((byte)param_1[0x5af] & 0x1f);
        param_1[0x5af] = param_1[0x5af] + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (short)(param_4 + 2U) << ((byte)param_1[0x5af] & 0x1f);
        iVar1 = param_1[5];
        param_1[5] = param_1[5] + 1;
        *(char *)(param_1[2] + iVar1) = (char)param_1[0x5ae];
        iVar1 = param_1[5];
        param_1[5] = param_1[5] + 1;
        *(char *)(param_1[2] + iVar1) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) =
             (short)((int)(param_4 + 2U & 0xffff) >> (0x10U - (char)param_1[0x5af] & 0x1f));
        param_1[0x5af] = param_1[0x5af] + -0xd;
      }
      FUN_0046c720(param_1,&DAT_0067e3b0,&DAT_0067e830);
    }
    else {
      if (param_1[0x5af] < 0xe) {
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (short)param_4 + 4 << ((byte)param_1[0x5af] & 0x1f);
        param_1[0x5af] = param_1[0x5af] + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (short)(param_4 + 4U) << ((byte)param_1[0x5af] & 0x1f);
        iVar1 = param_1[5];
        param_1[5] = param_1[5] + 1;
        *(char *)(param_1[2] + iVar1) = (char)param_1[0x5ae];
        iVar1 = param_1[5];
        param_1[5] = param_1[5] + 1;
        *(char *)(param_1[2] + iVar1) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) =
             (short)((int)(param_4 + 4U & 0xffff) >> (0x10U - (char)param_1[0x5af] & 0x1f));
        param_1[0x5af] = param_1[0x5af] + -0xd;
      }
      FUN_0046bdc8(param_1,param_1[0x2c7] + 1,param_1[0x2ca] + 1,local_c + 1);
      FUN_0046c720(param_1,param_1 + 0x25,param_1 + 0x262);
    }
  }
  else {
    FUN_0046c0c0(param_1,param_2,param_3,param_4);
  }
  FUN_0046aff0(param_1);
  if (param_4 != 0) {
    FUN_0046ccbc(param_1);
  }
  return;
}
