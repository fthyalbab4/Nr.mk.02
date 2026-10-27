// rea decompile_all
// name: FUN_00544244
// address: 0x544244
// body: available
// range: 0x544244-0x5443ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54425e (push 0x5443ce followed by fs-segment stack chaining); handler 0x5443ce lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54427e (push 0x5443ac followed by fs-segment stack chaining); handler 0x5443ac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00544244(int *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_005443ce;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x54426d;
  local_8 = param_1;
  iVar5 = FUN_00542e40(&DAT_00542ca4,1);
  local_8[0x19] = iVar5;
  puStack_30 = &LAB_005443ac;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*local_8 + 4))();
  local_8[0x13] = local_8[10];
  *(ushort *)(local_8 + 0x18) = (ushort)*(byte *)local_8[10];
  local_8[0x13] = local_8[0x13] + 1;
  if (local_8[4] <= (int)(short)local_8[0x18]) {
    FUN_0040b75c(&PTR_DAT_0053b400,&local_c);
    FUN_0053b600(local_c);
  }
  while( true ) {
    cVar3 = FUN_00543924(local_8);
    if (cVar3 == '\0') break;
    bVar1 = *(byte *)local_8[0x13];
    local_8[0x13] = local_8[0x13] + 1;
    if (local_8[4] <= (int)(uint)bVar1) {
      FUN_0040b75c(&PTR_DAT_0053b400,&local_10);
      FUN_0053b600(local_10);
    }
    iVar5 = (int)CONCAT21((short)local_8[0x18],bVar1);
    sVar4 = FUN_00542f20(local_8[0x19],iVar5);
    if (sVar4 < 0) {
      (**(code **)*local_8)(local_8,(int)(short)local_8[0x18]);
      *(ushort *)(local_8 + 0x18) = (ushort)bVar1;
      if (*(short *)((int)local_8 + 0x62) < 0xfff) {
        FUN_00542ed0(local_8[0x19],iVar5,*(undefined2 *)((int)local_8 + 0x62));
        *(short *)((int)local_8 + 0x62) = *(short *)((int)local_8 + 0x62) + 1;
      }
      else {
        (**(code **)(*local_8 + 4))();
      }
    }
    else {
      *(short *)(local_8 + 0x18) = sVar4;
    }
  }
  (**(code **)*local_8)(local_8,(int)(short)local_8[0x18]);
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005443b3;
  puStack_30 = (undefined1 *)0x5443ab;
  FUN_00405a7c(local_8[0x19],uStack_34,puVar2);
  return;
}
