// rea decompile_all
// name: FUN_00532994
// address: 0x532994
// body: available
// range: 0x532994-0x532c6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5329a8 (push 0x532c6f followed by fs-segment stack chaining); handler 0x532c6f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00532994(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00532c6f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar2 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x59) != '\0') {
    *(undefined1 *)(param_1 + 0x49c) = 1;
    uVar4 = FUN_004b4268(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x2ac));
    FUN_004c0238(*(undefined4 *)(param_1 + 0x3ac),(uVar4 & 1) != 0);
    uVar4 = FUN_004b4268(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x2ac));
    FUN_004c0238(*(undefined4 *)(param_1 + 0x3b0),(uVar4 & 2) != 0);
    uVar4 = FUN_004b4268(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x2ac));
    FUN_004c0238(*(undefined4 *)(param_1 + 0x3b4),(uVar4 & 4) != 0);
    uVar5 = FUN_004b4310(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x2ac));
    FUN_004b78f0(*(undefined4 *)(param_1 + 0x3a8),uVar5);
    FUN_004b41d4(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x2ac),&local_8);
    piVar1 = *(int **)(param_1 + 0x3a0);
    uVar5 = (**(code **)(*(int *)piVar1[0xab] + 0x54))((int *)piVar1[0xab],local_8);
    (**(code **)(*piVar1 + 0xf0))(piVar1,uVar5);
    uVar5 = FUN_004b47d4(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x2b4));
    FUN_004c0238(*(undefined4 *)(param_1 + 0x3cc),uVar5);
    cVar3 = FUN_004b4780(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x2b4));
    if (cVar3 == '\0') {
      FUN_004c0238(*(undefined4 *)(param_1 + 0x3bc),1);
    }
    else if (cVar3 == '\x01') {
      FUN_004c0238(*(undefined4 *)(param_1 + 0x3c4),1);
    }
    else if (cVar3 == '\x02') {
      FUN_004c0238(*(undefined4 *)(param_1 + 0x3c0),1);
    }
    iVar6 = (**(code **)(**(int **)(param_1 + 0x388) + 0xf4))();
    (**(code **)(**(int **)(param_1 + 0x394) + 0x74))(*(int **)(param_1 + 0x394),0 < iVar6);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x394) + 0x5c))();
    (**(code **)(**(int **)(param_1 + 0x390) + 0x74))(*(int **)(param_1 + 0x390),uVar5);
    uVar5 = FUN_004895b4();
    uVar5 = FUN_0048957c(uVar5,CONCAT22(extraout_var,1));
    (**(code **)(**(int **)(param_1 + 0x398) + 0x74))(*(int **)(param_1 + 0x398),uVar5);
    FUN_004dbce0(*(undefined4 *)(param_1 + 0x438),*(undefined1 *)(*(int *)(param_1 + 0x3ac) + 0x1b2)
                );
    FUN_004dbce0(*(undefined4 *)(param_1 + 0x43c),*(undefined1 *)(*(int *)(param_1 + 0x3b0) + 0x1b2)
                );
    FUN_004dbce0(*(undefined4 *)(param_1 + 0x440),*(undefined1 *)(*(int *)(param_1 + 0x3b4) + 0x1b2)
                );
    FUN_004dbce0(*(undefined4 *)(param_1 + 0x45c),*(undefined1 *)(*(int *)(param_1 + 0x3cc) + 0x1b2)
                );
    FUN_004dbce0(*(undefined4 *)(param_1 + 0x44c),*(undefined1 *)(*(int *)(param_1 + 0x3bc) + 0x1b2)
                );
    FUN_004dbce0(*(undefined4 *)(param_1 + 0x450),*(undefined1 *)(*(int *)(param_1 + 0x3c0) + 0x1b2)
                );
    FUN_004dbce0(*(undefined4 *)(param_1 + 0x454),*(undefined1 *)(*(int *)(param_1 + 0x3c4) + 0x1b2)
                );
    uVar5 = FUN_0047d998(*(undefined4 *)(param_1 + 0x388));
    FUN_004dbd34(*(undefined4 *)(param_1 + 0x408),uVar5);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x390) + 0x5c))();
    FUN_004dbd34(*(undefined4 *)(param_1 + 0x410),uVar5);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x394) + 0x5c))();
    FUN_004dbd34(*(undefined4 *)(param_1 + 0x414),uVar5);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x398) + 0x5c))();
    FUN_004dbd34(*(undefined4 *)(param_1 + 0x418),uVar5);
    FUN_004efb90(*(undefined4 *)(param_1 + 0x388),0xb7,0,0);
    (**(code **)(**(int **)(param_1 + 0x388) + 0xe8))();
    *(undefined1 *)(param_1 + 0x49c) = 0;
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00532c76;
  puStack_18 = (undefined1 *)0x532c6e;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar2);
  return;
}
