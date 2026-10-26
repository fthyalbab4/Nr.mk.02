// rea decompile_all
// name: FUN_006e4348
// address: 0x6e4348
// body: available
// range: 0x6e4348-0x6e4423 inclusive
// range: 0x6e4458-0x6e44f7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6e4366 (push 0x6e44f8 followed by fs-segment stack chaining); handler 0x6e44f8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e4348(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_006e44f8;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar2 = FUN_0071cdcc(param_3);
  iVar3 = FUN_0071cde4(param_3);
  uVar4 = FUN_0071cdfc(param_3);
  iVar5 = FUN_0071ccc0(param_3);
  if (iVar2 == 1) {
    FUN_0045b498(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5b4) + 0x274) + 0x40),1);
  }
  else {
    FUN_0045b498(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5b4) + 0x274) + 0x40),0);
  }
  if (iVar5 != *(int *)(param_3 + 0x14)) {
    FUN_004acb64(param_3,iVar5);
  }
  if (iVar5 != *(int *)(param_3 + 0x18)) {
    FUN_004acc04(param_3,iVar5);
  }
  if ((((iVar2 == 3) && (iVar3 != 10)) && (iVar3 != 0xb)) && (iVar3 != 0xd)) {
    uVar6 = iVar3 == 0xc;
    switch(iVar3) {
    case 1:
      FUN_0062cabc(uVar4,&local_8);
      break;
    case 2:
      FUN_006f5920(uVar4,&local_8);
      break;
    case 3:
      FUN_006522c0(uVar4,&local_8);
      break;
    case 4:
      FUN_00692f24(uVar4,&local_8);
      break;
    case 6:
      FUN_0064de38(uVar4,&local_8);
      break;
    case 7:
      FUN_00655b40(uVar4,&local_8);
      break;
    case 8:
      FUN_00722840(uVar4,&local_8);
      break;
    case 9:
      FUN_006fcc58(uVar4,&local_8);
      break;
    case 0xc:
      FUN_006fa608(uVar4,&local_8);
    }
    FUN_00408640(local_8,*(undefined4 *)(param_3 + 8));
    if (!(bool)uVar6) {
      FUN_004ac910(param_3,local_8);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006e44ff;
  puStack_28 = (undefined1 *)0x6e44f7;
  thunk_FUN_00406e5c(&local_8,uStack_2c,puVar1);
  return;
}
