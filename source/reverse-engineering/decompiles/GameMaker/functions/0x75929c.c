// rea decompile_all
// name: FUN_0075929c
// address: 0x75929c
// body: available
// range: 0x75929c-0x759516 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075929c(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_12;
  undefined2 local_e;
  int local_c;
  int local_8;

  if (param_1[3] != 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    local_8 = *(int *)(param_1[3] + 4);
    local_c = (*(code *)**(undefined4 **)param_1[3])();
    local_c = local_c + local_8;
    cVar1 = FUN_007590a4(&PTR_u_Start_007814bc,3);
    if (cVar1 != '\0') {
      while (cVar1 = FUN_00758f08(), cVar1 != '\0') {
        FUN_00759018(&local_24);
        local_12 = local_24;
        local_e = local_20;
        FUN_00758ea8();
        uVar2 = FUN_00758fa4();
        local_18 = FUN_00759054();
        local_1c = FUN_00759054();
        FUN_00758ec8();
        (**(code **)*param_1)(param_1,&local_12,uVar2,local_1c,local_18);
      }
    }
    cVar1 = FUN_007590a4(&PTR_u_Detailed_007814cc,3);
    if (cVar1 != '\0') {
      while (cVar1 = FUN_00758f08(), cVar1 != '\0') {
        FUN_00759018(&local_24);
        local_12 = local_24;
        local_e = local_20;
        FUN_00758ea8();
        uVar2 = FUN_00758fa4();
        FUN_00759084(0x43);
        local_18 = FUN_00759054();
        FUN_00759084(0x4d);
        local_1c = FUN_00759054();
        FUN_00758ec8();
        (**(code **)(*param_1 + 4))(param_1,&local_12,uVar2,local_1c,local_18);
      }
    }
    cVar1 = FUN_007590a4(&PTR_u_Address_007814dc,3);
    if (cVar1 != '\0') {
      while (cVar1 = FUN_00758f08(), cVar1 != '\0') {
        FUN_00759018(&local_24);
        local_12 = local_24;
        local_e = local_20;
        local_18 = FUN_00759054();
        FUN_00758ec8();
        (**(code **)(*param_1 + 8))(param_1,&local_12,local_18);
      }
    }
    cVar1 = FUN_007590a4(&PTR_u_Address_007814ec,3);
    if (cVar1 != '\0') {
      while (cVar1 = FUN_00758f08(), cVar1 != '\0') {
        FUN_00759018(&local_24);
        local_12 = local_24;
        local_e = local_20;
        local_18 = FUN_00759054();
        FUN_00758ec8();
        (**(code **)(*param_1 + 0xc))(param_1,&local_12,local_18);
      }
    }
    while (cVar1 = FUN_00759180(PTR_u_Line_numbers_for_007814fc), cVar1 != '\0') {
      param_1[5] = local_8;
      param_1[6] = local_8;
      while (*(char *)param_1[6] != '(') {
        param_1[6] = param_1[6] + 1;
      }
      FUN_00758ec8();
      (**(code **)(*param_1 + 0x10))(param_1,param_1[5],param_1[6]);
      do {
        FUN_00758ea8();
        uVar2 = FUN_00758f6c();
        FUN_00758ea8();
        FUN_00759018(&local_24);
        local_12 = local_24;
        local_e = local_20;
        FUN_00758ea8();
        (**(code **)(*param_1 + 0x14))(param_1,uVar2,&local_12);
        cVar1 = FUN_00758f08();
      } while (cVar1 != '\0');
    }
  }
  return;
}
