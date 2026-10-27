// rea decompile_all
// name: FUN_004d47c4
// address: 0x4d47c4
// body: available
// range: 0x4d47c4-0x4d4972 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d47e9 (push 0x4d4995 followed by fs-segment stack chaining); handler 0x4d4995 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d4808 (push 0x4d4973 followed by fs-segment stack chaining); handler 0x4d4973 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d47c4(undefined4 param_1,undefined4 param_2,byte param_3,byte param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  byte abStack_fe8 [3992];
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  byte local_d;
  undefined4 local_c;
  undefined4 local_8;

  puStack_3c = &stack0xfffffffc;
  local_24 = 0;
  local_20 = 0;
  puStack_40 = &LAB_004d4995;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x4d47fa;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_18 = FUN_004d27d8(&PTR_FUN_004d4478,1,0);
  puStack_48 = &stack0xfffffffc;
  puStack_4c = &LAB_004d4973;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  uVar4 = 0;
  ppuVar5 = &PTR_PTR_00778888;
  puVar6 = &DAT_0077892c;
  do {
    bVar2 = (byte)uVar4;
    bVar7 = bVar2 < 0xf;
    if (bVar2 < 0x10) {
      bVar7 = ((byte)(&stack0x00000018)[(int)(short)(uVar4 & 0x7f) >> 3] >> (uVar4 & 7) & 1) != 0;
    }
    if (bVar7) {
      local_1c = FUN_004d2654(*(undefined4 *)(local_18 + 0x38));
      FUN_0040b75c(*ppuVar5,&local_20);
      FUN_004d2314(local_1c,local_20);
      FUN_004d2350(local_1c,bVar2 == param_4);
      *(undefined4 *)(local_1c + 0x18) = *puVar6;
    }
    uVar4 = uVar4 + 1;
    puVar6 = puVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while ((char)uVar4 != '\f');
  if (local_d == 4) {
    FUN_0051f174(*(undefined4 *)PTR_DAT_00782280,&local_24);
    FUN_00407eb8(local_18 + 0x3c,local_24);
  }
  else {
    FUN_0040b75c((&PTR_PTR_00778860)[local_d],local_18 + 0x3c);
  }
  *(undefined1 *)(local_18 + 0x40) = 0;
  cVar3 = FUN_0051e544(*(undefined4 *)PTR_DAT_00782280);
  if (cVar3 != '\0') {
    FUN_004d31a4(local_18,*(ushort *)(local_18 + 0x5c) | 0x2000);
  }
  *(undefined4 *)(local_18 + 0x6c) = param_8;
  FUN_00407eb8(local_18 + 0xe8,param_5);
  FUN_004d3264(local_18,*(undefined4 *)(&DAT_00778918 + (uint)local_d * 4));
  FUN_00438bf4(param_7,param_6,&local_2c);
  *(undefined4 *)(local_18 + 0xf0) = local_2c;
  *(undefined4 *)(local_18 + 0xf4) = local_28;
  FUN_004d32a4(local_18,local_c);
  FUN_004d32e4(local_18,local_8);
  local_14 = 0;
  cVar3 = FUN_00405d08(local_18);
  puVar1 = puStack_48;
  if (cVar3 != '\0') {
    local_14 = *(undefined4 *)(local_18 + 0x74);
  }
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_004d497a;
  puStack_4c = (undefined1 *)0x4d4972;
  FUN_00405a7c(local_18,uStack_50,puVar1);
  return;
}
