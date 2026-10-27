// rea decompile_all
// name: FUN_006eecc0
// address: 0x6eecc0
// body: available
// range: 0x6eecc0-0x6eedc9 inclusive
// range: 0x6eedd1-0x6eedd5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6eed8e (push 0x6eedca followed by fs-segment stack chaining); handler 0x6eedca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eecc0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int *in_FS_OFFSET;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 uStack_17;
  undefined1 uStack_16;
  char cStack_15;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined2 local_6;

  puStack_20 = (undefined1 *)0x6eecda;
  iVar2 = FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5f0));
  if (*(int *)(iVar2 + 4) == 0) {
    puStack_20 = (undefined1 *)0x6eecf1;
    iVar2 = FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5f0));
    if (*(int *)(iVar2 + 8) == 0) {
      return;
    }
  }
  puStack_20 = (undefined1 *)0x6eed0c;
  uVar3 = FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5f0));
  puStack_20 = (undefined1 *)0x6eed15;
  uVar4 = FUN_0070284c(uVar3,0,0);
  cStack_15 = (char)(uVar4 >> 0x18);
  if (cStack_15 == '\0') {
    puStack_20 = (undefined1 *)0x1;
    uStack_17 = (undefined1)(uVar4 >> 8);
    uStack_16 = (undefined1)(uVar4 >> 0x10);
    puStack_24 = (undefined1 *)0x6eed31;
    puStack_20 = (undefined1 *)FUN_005a562c(uStack_16,uStack_17,uVar4 & 0xff);
    puStack_24 = (undefined1 *)0x6eed43;
    uVar3 = FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5f0));
    puStack_24 = (undefined1 *)0x6eed4c;
    FUN_00702884(uVar3,0,0);
  }
  puStack_20 = (undefined1 *)0x6eed5d;
  FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5f0));
  puStack_20 = (undefined1 *)0x6eed62;
  piVar5 = (int *)FUN_0070399c();
  puStack_24 = (undefined1 *)0x6eed7a;
  puStack_20 = (undefined1 *)uVar4;
  uVar3 = FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5f0));
  puStack_24 = (undefined1 *)0x6eed83;
  FUN_00702884(uVar3,0,0);
  puStack_24 = &LAB_006eedca;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*piVar5 + 0x68))(piVar5,&local_6,&local_c);
  uVar3 = FUN_004895b4();
  FUN_0048949c(uVar3,local_6,local_c);
  puVar1 = puStack_24;
  *in_FS_OFFSET = (int)local_10;
  puStack_24 = (undefined1 *)0x6eedd1;
  iStack_28 = 0x6eedc9;
  FUN_00405a7c(piVar5,local_10,puVar1);
  return;
}
