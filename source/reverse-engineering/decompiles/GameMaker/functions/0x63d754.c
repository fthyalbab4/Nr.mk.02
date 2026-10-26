// rea decompile_all
// name: FUN_0063d754
// address: 0x63d754
// body: available
// range: 0x63d754-0x63d7ad inclusive
// range: 0x63d7c7-0x63d82c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x63d783 (push 0x63d7ae followed by fs-segment stack chaining); handler 0x63d7ae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063d754(undefined4 param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  char cStack_9;

  puStack_1c = (undefined1 *)0x63d76b;
  piVar2 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_1c = (undefined1 *)0x63d778;
  FUN_00463dc0(piVar2,7);
  puStack_20 = &LAB_0063d7ae;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  uVar3 = FUN_004895b4();
  uVar3 = FUN_00489448(uVar3,CONCAT22(extraout_var,2));
  (**(code **)(*piVar2 + 100))(piVar2,CONCAT22(extraout_var_00,2),uVar3);
  puVar1 = puStack_20;
  *in_FS_OFFSET = 0;
  puStack_20 = (undefined1 *)0x63d7d1;
  FUN_00463dc0(piVar2,7,puVar1);
  puStack_20 = (undefined1 *)0x63d7e0;
  uVar3 = FUN_00701d38(&DAT_00700d94,1,piVar2);
  puStack_20 = (undefined1 *)0x63d7ea;
  FUN_00405a7c(piVar2);
  puStack_20 = (undefined1 *)0x63d7f5;
  uVar4 = FUN_0070284c(uVar3,0,0);
  cStack_9 = (char)(uVar4 >> 0x18);
  if (cStack_9 == '\x01') {
    puStack_20 = (undefined1 *)0x0;
    uStack_b = (undefined1)(uVar4 >> 8);
    uStack_a = (undefined1)(uVar4 >> 0x10);
    uStack_24 = 0x63d811;
    puStack_20 = (undefined1 *)FUN_005a562c(uStack_a,uStack_b,uVar4 & 0xff);
    uStack_24 = 0x63d81d;
    FUN_00702884(uVar3,0,0);
  }
  puStack_20 = (undefined1 *)0x63d826;
  FUN_0063d830(param_1,uVar3);
  return;
}
